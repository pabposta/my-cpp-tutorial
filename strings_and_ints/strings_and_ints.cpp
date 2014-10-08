#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	
	stringstream stream;
	string result;
	
	string youHaveStr = "You have ";
	string unreadMessagesStr = " unread messages";
	int unreadMessages = 4;
	stream << youHaveStr << unreadMessages << unreadMessagesStr;
	result = stream.str();
	cout << result << endl;
	
	stream.str("");
	stream.clear();
	
	string profileViewsStringStr = " people have viewed your profile";
	int profileViews = 23;
	stream << profileViews << profileViewsStringStr << endl;
	result = stream.str();
	cout << result;
	
	stream.str("");
	stream.clear();
	
	string yourAccountStr = "Your account is ";
	string completionPercentStr = "% complete";
	float completionPercent = 66.666666;
	
	stream << yourAccountStr << completionPercent << completionPercentStr;
	result = stream.str();
	cout << result << endl;
	
	stream.str("");
	stream.clear();
	
	stream << yourAccountStr << roundf(completionPercent) << completionPercentStr;
	result = stream.str();
	cout << result << endl;
	
	stream.str("");
	stream.clear();
	
	stream.setf(ios::fixed, ios::floatfield);
	stream.precision(2);
	stream << yourAccountStr << completionPercent << completionPercentStr;
	cout << stream.str() << endl;
		
	stream.str("");
	stream.clear();
	
	string activeStr = "This week you have been ";
	bool active = true;
	stream << activeStr << "active? " << active;
	cout << stream.str() << endl;
	
	stream.str("");
	stream.clear();
	
	string modeStr = active ? "active" : "inactive";
	stream << activeStr << modeStr << ".";
	cout << stream.str() << endl;
	
	return 0;
}
