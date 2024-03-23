//link tải DEVC++: https://www.embarcadero.com/free-tools/dev-cpp //
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

string checkWords(string sentence) {
    vector<string> keywords = {"hello kitty", "zach bryan", "zach" ,"bryan", "get in loser", "kid", "hallmark", "charlie", "snoopy", "comfort colors", "embroidered", "disney", "mickey", "svg", "png", "fuck", "cut", "baby", "yup", "nutcracker", "funny quote i will put you in a trunk women premium t-shirt", "labor and delivery", "nurse christmas shirt", "special deliveries shirt", "labor tech shirts", "l&d santa", "labor and delivery holiday shirts", "r2-d2", "i will put you in a trunk and help people look for you premium t-shirt", "flower shirt gift for her wild flower shirt aesthetic floral graphic tee wildflower shirt flower t-shirt botanical shirt wildflower tshirt stylish and warm t-shirts", "crewnecks", "hoodies for all", "nurse ghost i will stab you t-shirt funny halloween gift", "barbenheimer", "taylor swift","taylor", "jonas brothers", "winnie the pooh", "i am kenough", "spiderman", "jonas", "grinch", "l&d", "labor tech", "zach bryan", "get in loser", "kid", "hallmark", "charlie", "snoopy", "barbenheimer", "taylor swift", "jonas brothers","jonas", "winnie the pooh", "i am kenough", "spiderman", "jonas", "grinch", "l&d", "labor tech", "zach bryan", "get in loser", "kid", "hallmark", "charlie", "snoopy", "comfort colors®", "embroidered", "disney", "mickey", "svg", "png", "fuck", "cut", "baby", "yup", "nutcracker", "travis scott", "barbie", "swiftie", "bts", "politics", "game (zelda)", "kenny west", "ducks the sopranos", "nude", "kid", "child", "children", "toddler", "barbie", "phyladel phia", "the weeknd", "carhartt cow", "olivia rodrigo", "jordan", "active shooter", "palestine", "retro folklore", "hello kitty"};

    sentence = toLowerCase(sentence);
    for (const string& keyword : keywords) {
        if (sentence.find(keyword) != string::npos) {
            return "BANNED";
        }
    }

    return "NOT BANNED";
}

int main() {
	int n = 20;
	while(n--){
	for(int i = 0; i< n; i++){
		string input;
	    cout << "CheckKeyWord: ";
	    getline(cin, input);
	    cout << "Return: " << checkWords(input) << endl;
	}
	}
return 0;
}
