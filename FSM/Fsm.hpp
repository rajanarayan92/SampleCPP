#include <bits/stdc++.h>
#include<iostream>

typedef enum
{
    STATE_0,
    STATE_1,
    STATE_2,
    STATE_MAX
}FSM_STATE_ENUM;

typedef enum
{
    EVENT_0,
    EVENT_1,
    EVENT_2,
    EVENT_MAX
}FSM_EVENT_ENUM;

typedef bool FSM_HANDLER(char* arg1,
                         char* arg2,
                         char* arg3);

bool S0_E0_Hndl(char *arg1, char* arg2, char *arg3);
bool S0_E1_Hndl(char *arg1, char* arg2, char *arg3);
bool S0_E2_Hndl(char *arg1, char* arg2, char *arg3);
bool S1_E0_Hndl(char *arg1, char* arg2, char *arg3);
bool S1_E1_Hndl(char *arg1, char* arg2, char *arg3);
bool S1_E2_Hndl(char *arg1, char* arg2, char *arg3);
bool S2_E0_Hndl(char *arg1, char* arg2, char *arg3);
bool S2_E1_Hndl(char *arg1, char* arg2, char *arg3);
bool S2_E2_Hndl(char *arg1, char* arg2, char *arg3);
