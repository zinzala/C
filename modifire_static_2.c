// how static modifire work
int increment(){
    //int var = 5;
    static int count = 5;
    count = count + 1;
    return count;
}

