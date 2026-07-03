class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anag = {}

        for s in strs:
            sorted_s = "".join(sorted(s))

            if sorted_s not in anag:
                anag[sorted_s] = []

            anag[sorted_s].append(s)


        return list(anag.values())