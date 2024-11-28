#include<iostream>
#include<cstring>
using namespace std;

class CWH {
    protected: 
        float rating;
        char title[30];

    public:
        CWH(const char* s, float r) {
            rating = r;
            strcpy(title, s); 
        }

        virtual void display() {
            cout << "This is display of derived class" << endl;
        }
};

class CWH_video : public CWH {
    float videoLength;

    public:
        // Properly implement the constructor with initializer list
        CWH_video(const char* s, float r, float vl) : CWH(s, r) {
            videoLength = vl;
        }

        void display() {
            cout << "This video title : " << title << endl;
            cout << "This video Rating : " << rating << endl;
            cout << "This video length : " << videoLength << endl;
        }
};

class CWH_text : public CWH {
    int words;

    public:
        // Properly implement the constructor with initializer list
        CWH_text(const char* s, float r, int w) : CWH(s, r) {
            words = w;
        }

        // void display() {
        //     cout << "This video title : " << title << endl;
        //     cout << "This video Rating : " << rating << endl;
        //     cout << "This text words : " << words << endl;
        // }
};

int main() {
    const char *title = new char[30];
    float rating, vidLen;
    int words;

    title = "Mongo DB";
    rating = 4.8;
    vidLen = 55.46;
    words = 1630;

    CWH_video video(title,rating,vidLen);
    // video.display();

    // cout << "-----------------------------"<<endl;

    CWH_text text(title,rating,words);
    // text.display();

    CWH_video *pointer1 = &video;
    pointer1->display();

    cout << "-----------------------------"<<endl;

    CWH_text *pointer2 = &text;
    pointer2->display();

    return 0;
}

// agar virtual fn derived class mai present nhi hoga toh base wala hi chal jayega
