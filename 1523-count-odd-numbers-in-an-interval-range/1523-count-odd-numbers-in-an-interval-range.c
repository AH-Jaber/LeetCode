

int countOdds(int low, int high){
    if((high-low+1)%2==0) return (high-low+1)/2;
    if(low%2==0 && high%2==0) return (high-low)/2;
    return ((high-low)/2)+1;
}