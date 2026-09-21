#include<iostream>

using namespace std;

class Gujarat{

    public:
    int population;

    public:
    Gujarat(int popul)
    {
        population = popul;
    }

    // Gujarat(const Gujarat &g)
    // {
    //     // population = g.population;
    //     population = 200;
    // }

    Gujarat(const Gujarat &g)
    {
        // population = g.population;
        // population = 200; // wrong
        population = 200;
        g.population = 200;
    }

    void display()
    {
        cout<<"population is "<<population<<endl;
    }

};

int main()
{
    Gujarat g1(100);
    // g1.display();


    Gujarat g2(g1);

    g2.display();
    g1.display();
}