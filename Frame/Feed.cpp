#include "Feed.h"

int main() {
	User U(228);
	Twitt T(1488);
	NewsFeed NF(&U, &T);
	UserBoard UB(&U, &T);
	NF.create();
	UB.create();
	return 0;
}