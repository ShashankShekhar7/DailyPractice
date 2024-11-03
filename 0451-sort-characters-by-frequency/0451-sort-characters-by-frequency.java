class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer>map=new HashMap<>();
        for(char c:s.toCharArray()){
            map.put(c,map.getOrDefault(c,0)+1);
        }

        ArrayList<Map.Entry<Character,Integer>>entryList=new ArrayList<>(map.entrySet());
        Collections.sort(entryList,(a,b)->b.getValue()-a.getValue());
        StringBuilder result=new StringBuilder();
        for(Map.Entry<Character,Integer>entry:entryList){
            for(int i=0;i<entry.getValue();i++){
                result.append(entry.getKey());
            }
        }
        return result.toString();
    }
}