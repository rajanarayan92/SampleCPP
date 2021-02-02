#include  "Fsm.hpp"

using namespace std;

FSM_HANDLER *fsmTransTable[STATE_MAX][EVENT_MAX] = 
{
    //STATE_0
    { S0_E0_Hndl, S0_E1_Hndl, S0_E2_Hndl },

    //STATE_1
    { S1_E0_Hndl, S1_E1_Hndl, S1_E2_Hndl },

    //STATE_2
    { S2_E0_Hndl, S2_E1_Hndl, S2_E2_Hndl },
};


bool S0_E0_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S0_E0_Hndl \n";
    return true;
}
bool S0_E1_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S0_E1_Hndl \n";
    return true;
}
bool S0_E2_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S0_E2_Hndl \n";
    return true;
}
bool S1_E0_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S1_E0_Hndl \n";
    return true;
}
bool S1_E1_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S1_E1_Hndl \n";
    return true;
}
bool S1_E2_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S1_E2_Hndl \n";
    return true;
}
bool S2_E0_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S2_E0_Hndl \n";
    return true;
}
bool S2_E1_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S2_E1_Hndl \n";
    return true;
}
bool S2_E2_Hndl(char *arg1, char* arg2, char *arg3)
{
    cout << " I'm inside S2_E2_Hndl \n";
    return true;
}

int main(int argc, char *argv[])
{
    bool rtnValue;

    // Inital state
    FSM_STATE_ENUM myState = STATE_0;
    
    // Event EVENT_0 occured
    rtnValue = fsmTransTable[myState][EVENT_0](NULL, NULL, NULL);

    // Transition to STATE_2
    myState = STATE_2;

    // Event EVENT_2 occured
    rtnValue = fsmTransTable[myState][EVENT_2](NULL, NULL, NULL);

    return 0;
}
