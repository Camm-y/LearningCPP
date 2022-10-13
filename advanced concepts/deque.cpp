#include <deque>
#include <iostream>

int main()
{

    std::deque<int> a;
    std::deque<int> b{1,2,3,5,6,7};
    std::deque<int> c = b;
    std::deque<int> d(b.begin(), b.end()-2);
    std::deque<int> e(10);
    std::deque<int> f(10, 44);
    f.insert(f.begin() + 3, 5);
    std::deque<int>::iterator iter3 = f.begin();
    while(iter3 != f.end())
    {
        std::cout << *iter3 << " ";
        ++iter3;
    }
    std::cout << std::endl;
    f.erase(f.begin() + 3);

    //int g = d[2];
    // try
    // {
    //     int h = d[662];
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    int & g = f[0];
    g = 98;

    int &j = f.front();
    
    std::deque<int>::iterator iter = b.begin();
    while(iter != b.end())
    {
        std::cout << *iter << " ";
        ++iter;
    }

    std::cout << std::endl;

    std::deque<int>::reverse_iterator iter2 = b.rbegin();
    while(iter2 != b.rend())
    {
        std::cout << *iter2 << " ";
        ++iter2;
    }


    std::deque<int> p {5,6,7,8,2};
    for(int i=0; i<5; i++)
    {
        p.push_front(i);
    }
    for(int i : p){
        std::cout << i << " ";
    }

    while(p.empty() == false) 
    {
        std::cout << std::endl;
        p.pop_back();
        for (int i : p)
        {
            std::cout << i << " ";
        }
    }


    return 0;
}