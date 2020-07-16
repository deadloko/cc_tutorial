#pragma once

#include <iterator>
#include <vector>

#include "tutorial5/Message.h"
#include "tutorial5/frame/ServerToClientFrame.h"
#include "tutorial5/frame/ClientToServerFrame.h"

#include "Session.h"

namespace cc_tutorial
{

class ClientSession : public Session
{
    using Base = Session;
public:
    using Base::Base; // Inherit constructors

    // Common interface class for all the messages
    using Message =
        tutorial5::Message<
            comms::option::app::ReadIterator<const std::uint8_t*>, // Polymorphic read
            comms::option::app::WriteIterator<std::back_insert_iterator<std::vector<std::uint8_t> > >, // Polymorphic write
            comms::option::app::LengthInfoInterface, // Polymorphic length calculation
            comms::option::app::IdInfoInterface, // Polymorphic message ID retrieval
            comms::option::app::NameInterface, // Polymorphic message name retrieval
            comms::option::app::Handler<ClientSession> // Polymorphic dispatch
        >;
        
    // Definition of all the used message classes
    using Msg1 = tutorial5::message::Msg1<Message>;
    using Msg2 = tutorial5::message::Msg2<Message>;
    using Msg3 = tutorial5::message::Msg3<Message>;

    // Handling functions for all the dispatched message objects
    void handle(Message& msg);

protected:
    virtual bool startImpl() override final;
    virtual std::size_t processInputImpl(const std::uint8_t* buf, std::size_t bufLen) override final;

private:
    enum CommsStage
    {
        CommsStage_Msg1,
        CommsStage_Msg2,
        CommsStage_Msg3,
        CommsStage_NumOfValues
    };

    void sendMessage(const Message& msg);
    void doNextStage();
    void sendMsg1();
    void sendMsg2();
    void sendMsg3();

    using ServerToClientFrame = tutorial5::frame::ServerToClientFrame<Message>;
    using ClientToServerFrame = tutorial5::frame::ClientToServerFrame<Message>;

    ServerToClientFrame m_serverToClientFrame;
    ClientToServerFrame m_clientToServerFrame;
    CommsStage m_currentStage = CommsStage_NumOfValues;
};

} // namespace cc_tutorial
