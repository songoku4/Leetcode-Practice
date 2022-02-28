class Solution {
            int count;

    public int prefixCount(String[] words, String pref) {
        for(String wrd : words){
            if(wrd.startsWith(pref)){
                count+=1;
            }
        }
                    return count;

        
    }
}
