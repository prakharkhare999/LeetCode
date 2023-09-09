class Solution {
public:
    string interpret(string command) {
        //self impliment
        for(int i=0;i<command.length();i++){
            if(command[i]=='(' && command[i+1]==')'){
                command[i]='o';
                command.erase(i+1,1);

            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
command.erase(i,1);
                command[i+1]=='a';
                command[i+2]=='l';

                //yha pr ek yaad rakne wali chiz hai ki jb i+2 wala element l se replace ho jayega  
                // to uske index pr i+3 wala aa jayega to fir vo i+2 hi hoga kyuki i to erse kr denge pehle to i ki jagah i+1 pr i+1 ki jagah i+2 or i+3 ki jagah i+3
                
                command.erase(i+2,1);



            }
        }
        return command;
    }
};
