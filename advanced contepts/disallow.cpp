#include <string>
#include <iostream>

using namespace std;

class OpenFile
{
    public:
        OpenFile(string filename) {
            cout << "Open a file " << filename << endl;
        }
        // used to disable compiler generated functions
        void destroy() {delete this;}
    private:
        ~OpenFile() {cout <<  "OpenFile destructed." << endl;}

};

int main()
{
    OpenFile* f = new OpenFile(string("File"));
    f->destroy();

    //OpenFile f2(f); 
    // wont work because it's calling a deleted function
}

// A function that has a private destructor can only be stored on heap - not on stack