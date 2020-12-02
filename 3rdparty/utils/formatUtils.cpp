#include "formatUtils.h"

using namespace std;

//    const char* formatNumByDigit(int num)
string formatNumByDigit(int num)
{
    char outputStr[20] = "00000000000";
    sprintf(outputStr, "%05d", num);
    cout << "formatNumByDigit() : num == " << num << ", outputStr == " << outputStr << endl;
    return outputStr;
}