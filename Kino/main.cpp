#include "ReceivingOffice.h"

int main( int argc, const char* argv[] )
{
    CReceivingOffice* recOff = new CReceivingOffice();
    recOff->runSession();

    return 0;
}