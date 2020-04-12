#include <iostream>
using namespace std;

class User {
	public:
		User(int i) {
			id = i;
		};
		int GetID() { return id; };
	private:
		int id;
};

class Twitt {
	public:
		Twitt(int i){
			id = i;
		}
		int GetID() { return id; };
	private:
		int id;
};

class Feed {
    public:
		Feed(User* U, Twitt* T) { 
			WhatUser = U;
		 	body = T;
		};
    	virtual void create() {};
    protected:
        User* WhatUser;
        Twitt* body;
};

class NewsFeed: public Feed {
public:
	NewsFeed(User* U, Twitt* T): Feed(U, T){};
	void create() {
		int Uid = WhatUser->GetID();
		int Tid = body->GetID();
		printf("User: %d Twitt: %d  NewsFeed\n", Uid, Tid);
	};
};

class UserBoard: public Feed {
public:
	UserBoard(User *U, Twitt *T): Feed(U, T){};
	void create() {
		int Uid = WhatUser->GetID();
		int Tid = body->GetID();
		printf("User: %d Twitt: %d  UserBoard\n", Uid, Tid);
	};
};

