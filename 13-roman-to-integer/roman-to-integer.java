class Solution {
    public int romanToInt(String s) {
          Map<String, Integer> dic = new HashMap<>();
        dic.put("I", 1);
        dic.put("V", 5);
        dic.put("X", 10);
        dic.put("L", 50);
        dic.put("C", 100);
        dic.put("D", 500);
        dic.put("M", 1000);
        dic.put("IV", 4);
        dic.put("IX", 9);
        dic.put("XL", 40);
        dic.put("XC", 90);
        dic.put("CD", 400);
        dic.put("CM", 900);

        int total = 0;
        int i = 0;

        while (i < s.length()) {
            if (i < s.length() - 1 && dic.containsKey(s.substring(i, i + 2))) {
                total += dic.get(s.substring(i, i + 2));
                i += 2;
            } else {
                total += dic.get(s.substring(i, i + 1));
                i++;
            }
        }

        return total;
    }

    
}
