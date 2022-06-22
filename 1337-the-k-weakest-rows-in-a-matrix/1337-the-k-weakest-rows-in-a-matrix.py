class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        ans={}
        for i in range(len(mat)):
            ans[i]=sum(mat[i])
        ans=sorted(ans, key=ans.get)
        return ans[:k]
        