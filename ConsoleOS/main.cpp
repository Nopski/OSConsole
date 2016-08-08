#include <iostream>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <unistd.h>
#include <ctime>
#include <cmath>
#include <fstream>



using namespace std;


int main(int argc, char* argv[])
{
    for (int i = 0; i < 11; i++) {
                   std::cout << "Status: " << i << "\r" << std::flush;
                   sleep(1);
           }
           std::cout << "Completed\n";

           system("clear");

    string username1 = "username";
    string username;

    cout << "Please enter your username:   ";
    cin >> username;


    string password1 = "password";
    string password;

    cout << "Plese enter your password:  ";
    cin >> password;

    if (username == username1 || password == password1){

    cout << "Welcome";
    cout << "\nHelo User!";
    cout << "\nThis is a general menu.\nPlese Type a command \n> TIME \n> ABOUT \n> SETTINGS \n> SHUTDOWN \n> HELP \n> ENTHERNET \n> BINARY \n> CRYPTO \n> CALCULATOR \n> GAME";

    string command;

    cout << "\nPlease Enter your chosen  ";
    cin >> command;


    if (command == "time")
    {
        // current date/time based on current system
           time_t now = time(0);

           // convert now to string form
           char* dt = ctime(&now);

           cout << "The local date and time is: " << dt << endl;

           // convert now to tm struct for UTC
           tm *gmtm = gmtime(&now);
           dt = asctime(gmtm);
           cout << "The UTC date and time is:"<< dt << endl;
    }

    if (command == "settings")
    {
       cout << "\n> CHANGE COLOR \n> CHANGE BRIGHTNESS \n> CHANGE SPEAKER";
       string command1;
       cout << "\nPlease enter your chosen  ";
       cin >> command1;
       if (command1 == "color")
       {
          system("color 9");
       }

       if (command1 == "brightness")
       {
          cout << "You use ConsoleOS";
       }

       else if (command1 == "speaker")
       {
          cout << "You use ConsoleOS";
       }
    }

    if (command == "help")
    {
       cout << "Hello user. \nThere you can write help, about shutdown or enthernet. \nIf you write about you will show information. \nIf you write enthernet the webbrowser wil open. \nIf you write system you will get information. \nIf you write login you can login to our system. \nIf you write shutdown this console will shutdown";
    }

    if (command == "enthernet")
    {
       //cout << "You use ConsoleOS";
        /*char url[1000] = "https://www.google.com";

               std::fstream fs;
               fs.open(url);
               fs.close();*/

        system("firefox http://google.com");
    }

    if (command == "binary")
    {
       char letter = ' ', playAgain = 'y';
string word = " ";

cout << "\t**Text To Binary Convertor**\n\n";

while (playAgain == 'y'){

    cout << "Please enter a character, word, or phrase: ";

    getline (cin, word, '\n');

    cout << "\nThe binary value for " << word << " is \n";

    for (unsigned int wordPosition = 0; wordPosition < word.size(); ++wordPosition){

        letter = word[wordPosition];

        bitset <8> binary(letter);

        cout << binary;
        }


    cout << "\n\nWould you like to try again? (y/n)";

    cin >> playAgain;

    if (playAgain != 'y'){
        cout << "\n\nExiting program.";
        playAgain = 'n';
        }
        cin.ignore();
}
    }

    if (command == "crypto")
    {
       //cout << "You use ConsoleOS";
       string input;
       int count = 0, length;

       cout <<"Enter your phrase: \n";
       //getline(cin, input);
       cin >> input;

       length = (int)input.length();

       for (count = 0; count < length; count++)
       {
          if (isalpha(input[count]))
          {
             input[count] = tolower(input[count]);
             for (int i = 0; i < 13; i++)
             {
                if (input[count] == 'z')
                   input[count] = 'a';
                else
                   input[count]++;
             }
          }
       }

       cout <<"Results: \n" << input << endl;
    }

    if (command == "calculator")
    {
       float a, b;
       cout << "Enter first number: ";
       cin >> a;
       cout << "Enter second number: ";
       cin >> b;
       float c = a + b;
       float f = a - b;
       float r = a * b;
       double q = a / b;
       double w = sqrt(a);
       cout << "The sum is: " << c << endl;
       cout << "The minus is: " << f << endl;
       cout << "The multiplication is: " << r << endl;
       cout << "The division is: " << q << endl;
       cout << "The sqrt is: " << w << endl;
    }

    if (command == "game")
    {
       cout <<"\n> 1)GAME1 \n> 2)CHAT BOT \n> 3)ADVENTURE GAME";
       string command2;
       cout << "\nPlease Enter your chosen  ";
       cin >> command2;
       if (command2 == "game1")
       {
       string num1;
       string num2;
       cout << "Enter the number1: ";
       cin >> num1;
       cout << "Enter the number2: ";
       cin >> num2;
       if (num1 == num2)
       {
          cout << "You win!!!";
       }

       else
       {
          cout << "You loose";
       }
       }

       if (command2 == "game2")
       {
          cout << "I am beetalking!";
          string commande = "";
    bool continuer = true;
    string name;
    char question1[] = " What's your name? ";
    string question2 = "Where do you live? ";
    char answer1 [80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "\x1b[32;1m Hello, " << answer1;
     cout << "\x1b[32;1m from " << answer2 << "!\n";
    string question3 = "How are you? ";
     string answer3;
    cout << question3;
    cin >> answer3;
    cout << "\x1b[36;1m Это " << answer3 << "!\n";
    string question4 = "Tell me about yourself? ";
    string answer4;
    cout << question4;
    cin >> answer4;
    cout << "\x1b[33;1m It's very intresting...No, it's really very intresting " << answer4 << "!\n";
    string question5 = "What is your hobby? ";
    string answer5;
    cout << question5;
    cin >> answer5;
    cout << "Cool hobby " << answer5 << "!\n";
    string question6 = "Maybe we can be friend? ";
    string answer6;
    cout << question6;
    cin >> answer6;
    cout << "\x1b[35;1m/Great";
    string question7 = " What do you like? ";
    string answer7;
    cout << question7;
    cin >> answer7;
    cout << "Not bad " << answer7 << "!\n";
    string question8 = "What ganre of music do you like? ";
    string answer8;
    cout << question8;
    cin >> answer8;
    cout << "Cool" << answer8 << "!\n";
      string question9 = "\x1b[32;1m What's the weather? ";
    string answer9;
    cout << question9;
    cin >> answer9;
    cout << "The weather is " <<  answer9 << "!\n";
    string question10 = "Are you an employee or student? ";
    string answer10;
    cout << question10;
    cin >> answer10;
    cout << "OK)";
    cout << "I am a robot. I recently came up. I like to talk about nothing)";
    getline (cin, name);
    char answer;
    cout << "Am i like you?" << endl;
    cin >> answer;
    if ((answer == 'Y') || (answer == 'y')) {
    cout << "Cool." << endl;
}
    while(continuer){
        getline(cin,commande);
    if(commande == "n")
       continuer = false;
        }
    cout <<" My time has gone out...";
    cout << "I must swith off. You are intresting person. Good luck. Chao!!! ";
     getline (cin, name);
       }

       if (command2 == "game3")
       {
          string command3;
          cout << "Welcome to Adventure Game \n Choose your heroes ";
          cout << "\n> Warrior \n> Elf \n> Human \n> Magicion  ";
          cin >> command3;
          string gander;
          cout << "\nChoose your gander: \nMale / Female  ";
          cin >> gander;
          if (command3 == "Warrior" || "Male")
          {
             cout << "You chose Warrior and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          if (command3 == "Elf" || "Male")
          {
             cout << "You chose Elf and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          if (command3 == "Human" || "Male")
          {
             cout << "You chose Human and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          if (command3 == "Magicion" || "Male")
          {
             cout << "You chose Magicion and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          else if (command3 == "Warrior" || "Female")
          {
             cout << "You chose Warrior and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          else if (command3 == "Elf" || "Female")
          {
             cout << "You chose Warrior and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          else if (command3 == "Human" || "Female")
          {
             cout << "You chose Warrior and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }

          else if (command3 == "Magicion" || "Female")
          {
             cout << "You chose Warrior and your hero is Male. \nYour skill is: \nHelth is 100 \nEnergy is 100";
          }
       }
    }

    if (command == "about")
    {
       cout << "This is my operating system. It's created on 28.06.2016";
    }

    else if (command == "shutdown")
    {
       cout << "Good Bye...";
       exit(0);
    }


    return 0;
}
else
{
   cout << "False password or username.\nTry again ";
   cin >> username;
   cin >> password;
}
}

