public static int liftingWeights(int[] weights, int capacity ){
        int maxLift =0 ;
        List<Integer> hlist = new ArrayList<>();
        
        for(int num : weights){
          hlist.add(num);
        }
        Collections.sort(hlist, Collections.reverseOrder());
        System.out.println(hlist);
        
        for(int num : hlist){
            while(maxLift+num <= capacity){
                maxLift+=num;
            }
        }
