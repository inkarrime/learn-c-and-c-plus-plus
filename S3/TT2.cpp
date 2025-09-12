#include <iostream>
using namespace std;

int main() {
    cout << "[Intro: Rick James & James Brown]\n";
    for (int rows = 1; rows <= 4; rows++) {
        for (int columns = 1; columns <= 4; columns++) {
            cout <<  "Look at ya";
            if (columns<4) cout << ", ";
        }
        if (rows == 4) {
            cout << " (";
            for (int word = 1; word <= 3; word++) {
                if (word==1) {
                    cout << "Ladies";
                } else {
                    cout << "ladies";
                }
                if (word!=2) cout << " and gentlemen";
                if (word<3) cout << ", ";
                if (word==2) cout << "\n";
            }
            cout << ")";
        }
        cout << "\n";
    }
    cout << "\n";

    for (int chorus = 1; chorus <= 3; chorus++) {
        cout << "[Pre-Chorus: Kanye West]\n";
        cout << "And ";
        int repeat;
        if (chorus==2) {
            repeat = 5;
        } else {
            repeat = 3;
        }
        for (int i = 1; i <= repeat; i++) {
            if (i == 2) {
                cout << "yeah";
            } else if (i == 4) {
                cout << "\n";
                cout << "Yeah";
            } else {
                cout << "I always find";
            }
            if (i < repeat) {
                if (chorus == 2 && i != 3) {
                    cout << ", ";
                }
            }
            if (i == repeat) cout << " something wrong";
        }
        cout << "\n";
        cout << "You been puttin' up with my shit just way too long\n";
        cout << "I'm so gifted at finding what I don't like the most\n";
        cout << "So I think it's time for us to have a toast\n";
        cout << "\n";
        cout << "[Chorus: Kanye West]\n";
        for (int i = 1; i <= 3; i++) {
            cout << "Let's have a toast for the ";
            if (i == 1) {
                cout << "douchebags";
            } else if (i == 2) {
                cout << "assholes";
            } else {
                cout << "scumbags";
            }
            cout << "\n";
        }
        cout << "Every one of them that I know\n";
        cout << "Let's have a toast for the jerk-offs\n";
        cout << "That'll never take work off\n";
        cout << "Baby, I got a plan\n";
        cout << "Run away fast as you can\n";
        cout << "\n";
        if (chorus == 1) {
            cout << "[Verse 1: Kanye West]\n";
            cout << "She find pictures in my email\n";
            for (int i = 1; i <= 2; i++) {
                cout << "I ";
                if (i == 1) {
                    cout << "sent this bitch a picture of my dick\n";
                }else {
                    cout << "don't know what it is with females\n";
                }
            }
            cout << "But I'm not too good at that shit\n";
            cout << "See, I could have me a good girl\n";
            for (int i = 1; i <= 2; i++) {
                cout << "And ";
                if (i == 1) {
                    cout << "still be addicted to them hoodrats\n";
                } else {
                    cout << "I just blame everything on you\n";
                }
            }
            cout << "At least you know that's what I'm good at\n";
            cout << "\n";
        } else if (chorus == 2) {
            cout << "[Bridge: Kanye West & Rick James]\n";
            for (int i = 1; i <= 8; i++) {
                cout << "Run away";
                if (i == 1 || i == 2 || i == 4 || i == 6) {
                    cout << " from me, baby";
                }
                if (i == 1) {
                    cout << "\n";
                    cout << "Ah, run away";
                } else if (i == 3 || i == 7) {
                    cout << "\n";
                    cout << "When it start to get crazy";
                } else if (i == 8) {
                    cout << " as fast as you can";
                }
                if (i==2 || i == 3 || i == 6 || i == 7 || i == 8) {
                    cout << " (";
                    int number;
                    if (i == 6) {
                        number = 7;
                    } else if (i == 7) {
                        number = 4;
                    } else {
                        number = 3;
                    }
                    for (int j = 1; j <= number; j++) {
                        if (j==1) {
                            cout << "Look ";
                        } else {
                            cout << "look ";
                        }
                        cout << "at";
                        if (i == 6){
                            if (j == number) {
                                cout << " ya";
                            }
                        } else {
                            cout << " ya";
                        }
                        if (j < number) {
                            cout << ", ";
                        }
                        if (j == 6) {
                            cout << "\n";
                        }
                    }
                    cout << ")";
                }
                if (i == 3) {
                    cout << "\n";
                    cout << "Then run away\n";
                    cout << "Babe, I got a plan, run away as fast as you can";
                } else if (i == 7) {
                    cout << "\n";
                    cout << "Why can't she just run away?\n";
                    cout << "Baby, I got a plan";
                }
                cout << "\n";
            }
            cout << "\n";
            cout << "[Verse 2: Pusha T]\n";
            cout << "Twenty-four seven, three sixty-five, pussy stays on my mind\n";
            for (int i = 1; i <= 4; i++) {
                cout << "I";
                if (i < 4) {
                    cout << "-";
                }
            }
            cout << " did it, alright, alright, I admit it\n";
            cout << "Now pick your next move, you could leave or live with it\n";
            cout << "Ichabod Crane with that motherfuckin' top off\n";
            cout << "Split and go where? Back to wearing knockoffs?\n";
            cout << "Haha";
            for (int i = 1; i <= 3; i++) {
                cout << ", ";
                if (i == 1) cout << "knock it off";
                if (i == 2) cout << "Neimans";
                if (i == 3) cout << "shop it off\n";
            }
            cout << "Let's talk over mai tais, waitress, top it off\n";
            cout << "Hoes like vultures, wanna fly in your Freddy loafers\n";
            for (int i = 1; i <= 2; i++) {
                cout << "You ";
                if (i == 1) {
                    cout << "can't blame 'em, they ain't never seen Versace sofas\n";
                    cout << "Every bag, every blouse, every bracelet\n";
                    cout << "Comes with a price tag, baby, face it\n";
                } else {
                    cout << "should leave if you can't accept the basics\n";
                    cout << "Plenty hoes in the baller-nigga matrix\n";
                    cout << "Invisibly set, the Rolex is faceless\n";
                    cout << "I'm just young, rich, and tasteless, P\n";
                }
            }
            cout << "\n";
            cout << "[Verse 3: Kanye West]\n";
            cout << "Never was much of a romantic\n";
            for (int i = 1; i <= 3; i++) {
                cout << "I";
                if (i == 1) {
                    cout << " could never take the intimacy\n";
                    cout << "And I know I did damage\n";
                    cout << "'Cause the look in your eyes is killing me\n";
                } else if (i == 2) {
                    cout << " guess you knew of that advantage\n";
                    cout << "'Cause you could blame me for everything\n";
                    cout << "And I don't know how I'ma manage\n";
                } else {
                    cout << "f one day, you just up and leave\n";
                }
            }
            cout << "\n";
        }
    }


    cout << "[Outro: Kanye West]\n";
    cout << "[Non-Lyrical Vocals]";
    return 0;
}