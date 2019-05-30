//Crie um programa para ler o tempo registrado por um atleta durante uma corrida com N voltas,
//a leitura deve ocorrer em uma função e o registro do melhor tempo deve ser atualizado através de um ponteiro.
//Encerrar o programa quando o número zero for informado para o tempo, apresentar o melhor tempo.
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <unistd.h>
#include <windows.h>
using namespace std;
int cro(int seg, int mim ,int hor)
{
    int  ms=1;
    if(seg>60)
        {
            mim=((mim+(seg/60)));
            seg=((seg%60));
        }
    else
    {
        if(seg%60==0 && seg!=0)
    {
        mim= ((mim+(seg/60)));
        seg=0;
    }
    }
    if(mim>60)
        {
            hor = ((hor+(mim/60)));
            mim = ((mim%60));
        }

    else
    {
       if(mim%60==0 && mim!=0)
    {
        hor = ((hor+(mim/60)));
        mim = 0;
    }
    }
    for(seg,hor,mim,ms;; ms--)
    {
        if(hor<=0 && mim<=0 && seg<=0)
        {
            system("cls");
            cout<<"O tempo acabou !";
            return 0;

        }
        system("cls");
        cout<<"\n\n"<<hor<<":"<<mim<<":"<<seg<<","<<ms;
        Sleep(ms);
    if(ms==0 && seg!=0){
        seg--;
        ms=ms+60;
    }
    if(seg==0 && mim!=0)
        {
            mim--;
            seg=seg+60;
        }
      if(mim==0 && hor!=0)
        {
            hor--;
            mim=mim+60;
        }
    }

    return 0;
}
main()
{
    int  seg, mim, ms=1, hor;

    cout<<"Informe o tempo total de corrida em seg: ";
    cin>>seg;
    cout<<"Informe o tempo total de corrida em min: ";
    cin>>mim;
    cout<<"Informe o tempo total de corrida em hor: ";
    cin>>hor;
    fflush(stdin);
    cout<<"Tempo: "<< cro(seg , mim, hor);

}



