#include <iostream>
#include <cstdlib>// system worked without it on Lubuntu, strange.
using namespace std;

int main()
{
  //  cout << "Hello world!" << endl;
    string file = "";

   file = system("zenity --file-selection --title=\" Votre fichier ?\"");
cout << file;
system("zenity --info --text=\"     Ok.     \" --title=\" \"");

    return 0;
}
