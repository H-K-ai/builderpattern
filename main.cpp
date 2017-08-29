#include <QCoreApplication>
#include <iostream>
using namespace std;

#include "concrete_bulider.h"
#include "director.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p) {delete (p); (p)=NULL;}}
#endif

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Director *pDirector = new Director();
    ThinkPadBuilder *pThinkPadBuilder = new ThinkPadBuilder();
    YogaBuilder *pYogaBuilder = new YogaBuilder();

    //组装ThinkPad、Yoga
    pDirector->Create(pThinkPadBuilder);
    pDirector->Create(pYogaBuilder);

    //获取组装后的电脑
    Computer *pThinkPadComputer = pThinkPadBuilder->GetResult();
    Computer *pYogaComputer = pYogaBuilder->GetResult();

    // 测试输出
    cout << "-----ThinkPad-----" << endl;
    cout << "CPU: " << pThinkPadComputer->GetmCpu() << endl;
    cout << "Mainboard: " << pThinkPadComputer->GetMainBoard() << endl;
    cout << "Ram: " << pThinkPadComputer->GetRam() << endl;
    cout << "VideoCard: " << pThinkPadComputer->GetVideoCard() << endl;

    cout << "-----Yoga-----" << endl;
    cout << "CPU: " << pYogaComputer->GetmCpu() << endl;
    cout << "Mainboard: " << pYogaComputer->GetMainBoard() << endl;
    cout << "Ram: " << pYogaComputer->GetRam() << endl;
    cout << "VideoCard: " << pYogaComputer->GetVideoCard() << endl;

    SAFE_DELETE(pThinkPadComputer);
    SAFE_DELETE(pYogaComputer);
    SAFE_DELETE(pThinkPadBuilder);
    SAFE_DELETE(pYogaBuilder);
    SAFE_DELETE(pDirector);

    return a.exec();
}
