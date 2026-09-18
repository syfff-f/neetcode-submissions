class Solution:
        def isAnagram(self, s: str, t: str) -> bool:
            if (len(s)!=len(t)): 
                return False
            dic={}
            for i in s:
                if (i not in dic ):
                    dic[i]=1
                else:
                    dic[i]+=1
            
            for j in t:
                if j in dic:
                    dic[j]-=1
            for i in dic:
                if dic[i]!=0:
                    return False
            return True
        def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            dic={}
            for i in strs:
                if (tuple(sorted(i)) not in dic):
                    dic[tuple(sorted(i))]=[]
            for i in strs:
                dic[tuple(sorted(i))].append(i)
            res=[]
            for i in dic.values():
                res.append(i)
            return (res)



            