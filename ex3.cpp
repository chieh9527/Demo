//
// Created by Chieh on 2019/4/15.
//

#include <iostream>

using namespace std;

//定义枚举类型
enum CPU_Rank{p1,p2,p3,p4,p5,p6,p7};
//定义cpu类
class CPU
{
public:
    //    创建构造函数
    CPU(CPU_Rank r, int f, float v);
    void showCPU();
    void startCPU();
    void stopCPU();
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
};
//析构函数
CPU::CPU(CPU_Rank r, int f, float v)
{
    rank = r;
    frequency = f;
    voltage = v;
}

void CPU::showCPU()
{
    cout<<"my CPU rank is "<<rank<<endl;
    cout<<"my CPU frequent is "<<frequency<<"HZ"<<endl;
    cout<<"my CPU voltage is "<<voltage<<"V"<<endl;
}

void CPU::startCPU()
{
    string a = "start",b;
    cout<<"please input start"<<endl;
    cin>>b;
    if (a == b) cout<<"CPU has started"<<endl;
    else cout<<"Not allowed to naughty"<<endl;
}

void CPU::stopCPU()
{
    string a = "stop",b;
    cout<<"please input stop"<<endl;
    cin>>b;
    if (a == b) cout<<"CPU has stop"<<endl;
    else cout<<"Perfect!!!you are a man!!!"<<endl;
}

//定义RAM类
class RAM
{
public:
    RAM(int s);
    void showRAMsize();
private:
    int RAMsize;
};

RAM::RAM(int s)
{
    RAMsize = s;
}

void RAM::showRAMsize()
{
    cout<<"My RAM size is "<<RAMsize<<"M"<<endl;
}

//定义RAM类
class CDROM
{
public:
    void showCDROM();
};

void CDROM::showCDROM()
{
    cout<<"Your CDROM is 16GB"<<endl;
}

int main()
{
    class CPU mCPU(p1,1024,50);
    class RAM mRAM(1024);
    class CDROM mCDROM;

    mCPU.showCPU();
    mRAM.showRAMsize();
    mCDROM.showCDROM();
    mCPU.startCPU();
    mCPU.stopCPU();
}
