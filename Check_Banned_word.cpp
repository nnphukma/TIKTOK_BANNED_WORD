#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

vector<string> checkWords(string sentence) {
vector<string> keywords = {"zach bryan", "zach", "bryan", "get in loser", "kid", "hallmark", "charlie", "snoopy", "comfort colors", "embroidered", "disney", "mickey", "svg", "png", "fuck", "cut", "baby", "yup", "nutcracker", "funny quote i will put you in a trunk women premium t-shirt", "labor and delivery nurse christmas shirt, special deliveries shirt, labor tech shirts", "l&d santa shirt", "labor and delivery holiday shirts", "r2-d2", "i will put you in a trunk and help people look for you premium t-shirt", "flower shirt gift for her wild flower shirt aesthetic floral graphic tee wildflower shirt flower t-shirt botanical shirt wildflower tshirt stylish and warm t-shirts", "crewnecks", "hoodies for all", "nurse ghost i will stab you t-shirt funny halloween gift", "barbenheimer", "taylor swift","taylor", "jonas brothers", "jonas", "winnie the pooh", "i am kenough","kenough", "spiderman", "grinch", "l&d", "labor tech", "zach bryan", "get in loser", "kid", "hallmark", "charlie", "snoopy", "comfort colors", "embroidered", "disney", "mickey", "svg", "png", "fuck", "cut", "baby", "yup", "nutcracker", "travis scott", "travis", "barbie", "swiftie", "bts", "politics", "game (zelda)", "zelda", "kenny west", "kenny", "west", "ducks the sopranos", "sopranos", "kid", "child", "children", "toddler", "barbie", "philadelphia", "the weeknd", "carhartt cow", "olivia rodrigo", "olivia", "rodrigo", "jordan", "active shooter", "palestine", "retro folklore", "retro", "folklore", "hello kitty", "hoodie for all"};
   sentence = toLowerCase(sentence);
    vector<string> foundKeywords;
    for (const string& keyword : keywords) {
        if (sentence.find(keyword) != string::npos) {
            foundKeywords.push_back(keyword);
        }
    }

    return foundKeywords;

}

int main() {
	vector<string> testCases;
    string input;
    int n = 20;

    while (n--) {
        cout << "TestCase #" << (20 - n) << ": ";
        getline(cin, input);
        testCases.push_back(input);

        vector<string> foundKeywords = checkWords(input);
        if (!foundKeywords.empty()) {
            cout << "Loading KeyBanned: ";
            for (const string& keyword : foundKeywords) {
                cout << " " << keyword << ",";
            }
            cout << endl;
        }
       else {
       	cout << "NOT BANNED" << endl;
	   }
        cout << endl;
    }

    cout << "Kết thúc test cases" << endl;

    return 0;
}