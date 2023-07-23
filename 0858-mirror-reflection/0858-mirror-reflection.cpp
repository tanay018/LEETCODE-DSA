class Solution {
public:
    int mirrorReflection(float p, float q) {
       int ext=q;
    int ref=p;
    
    while(ref%2==0 && ext%2==0){
        ref=ref/2;
        ext=ext/2;
    }
    
    if(ref%2==1 && ext%2==0){
        return 0;
    }
    else if(ref%2==0 && ext%2==1){
        return 2;
    }
    else if(ref%2==1 && ext%2==1){
        return 1;
    }
    else{
       return -1; 
    }
    }
};