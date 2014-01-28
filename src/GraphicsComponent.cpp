#include"../include/GraphicsComponent.hpp"

#include<iostream>

GraphicsComponent::GraphicsComponent()
{
	message_count_ = 0;
}

void GraphicsComponent::receive(unsigned int message)
{
	message_received_ = true;
	if(message_count_ == 0) {
		messages_ 		= new unsigned int[1];
		messages_[0]	= message;
	} else {
		unsigned int* temp = messages_;
		messages_ = new unsigned int[message_count_+1];
		for(int i=0; i<message_count_; i++) {
			messages_[i] = temp[i];
		}
		messages_[message_count_] = message;
	}
	message_count_++;
}

void GraphicsComponent::resetMessages()
{
	delete [] messages_;
	message_count_ = 0;
}

bool GraphicsComponent::pollMessage(unsigned int& message)
{
	if(message_count_ > 0) {
		message = messages_[--message_count_];
		return true;
	} else {
		if(message_received_) {
			resetMessages();
			message_received_ = false;
		}
		return false;
	}
}
