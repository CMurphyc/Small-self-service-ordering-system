#include"FeeManager.h"
FeeManager::FeeManager()
{
    jiuCanFee = 0;
    waiMaiFee = 0;
}
double FeeManager::getWaiMaiFee()
{
    return waiMaiFee;
}
double FeeManager::getJiuCanFee()
{
    return jiuCanFee;
}
void FeeManager::addWaiMaiFee(double x)
{
    waiMaiFee += x;
}
void FeeManager::addJiuCanFee(double x)
{
    jiuCanFee += x;
}
