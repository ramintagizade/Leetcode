import math

'''
def lex(end, cur=0):
    if cur > end:
        return
    if cur >= 1:
        yield cur
    for i in range(0,10):
        next_cur = cur * 10 + i
        if next_cur == 0:
            continue
        for ret in lex(end, next_cur):
            yield ret

print list(lex(105))
'''
#class Solution(object):
def lexicalOrder(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
def lex(end, cur=0):
        if cur > end:
            return
        if cur >= 1:
            yield cur
        for i in range(0,10):
            next_cur = cur * 10 + i
            if next_cur == 0:
                continue
            for ret in lex(end, next_cur):
                yield ret

print list(lex(13))
