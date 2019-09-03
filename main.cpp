#include <iostream>

using namespace std;

struct Ncomplejo {
    double Preal;
    double Pimaginario;
};

Ncomplejo Suma(Ncomplejo a,Ncomplejo b){
    Ncomplejo ans;
    ans.Preal=a.Preal+b.Preal;
    ans.Pimaginario=a.Pimaginario+b.Pimaginario;

    return ans;
}

int main()
{
  Ncomplejo One;
  One.Preal=1;
  One.Pimaginario=2;

  Ncomplejo Two;
  Two.Preal=3;
  Two.Pimaginario=4;

  Ncomplejo imp=Suma(One,Two);

  cout<<"Parte Real"<<endl;
  cout<<imp.Preal<<endl;

    cout<<"Parte Imaginaria"<<endl;
    cout<<imp.Pimaginario;


}