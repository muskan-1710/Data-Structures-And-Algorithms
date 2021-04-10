boolean shuffleCheck(String first, String second, String result) {
int i=0;
  int j=0;
  int k=0;
  if(first.length()+second.length()!=result.length()){
    return false;
  }
  while(k!=result.length()){
    if(i<first.length()&&first.charAt(i) == result.charAt(k)){
      i++;
    }
    else if(j<second.length()&&second.charAt(j)==result.charAt(k)){
      j++;
    }
    else{
    k++;
    }
    if(i<first.length() ||j<second.length()){
      return false;
    }
    return true;
  }
  
