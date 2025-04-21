class FrontMiddleBackQueue:

    def __init__(self):
        self.q = []
        

    def pushFront(self, val: int) -> None:
        self.q.insert(0, val)
        

    def pushMiddle(self, val: int) -> None:
        mid = len(self.q) // 2
        self.q.insert(mid, val)
        

    def pushBack(self, val: int) -> None:
        self.q.append(val)
        

    def popFront(self) -> int:
        if(len(self.q) == 0):
            return -1
        return(self.q.pop(0))

    def popMiddle(self) -> int:
        if not self.q:
            return -1
        mid = (len(self.q) -1) // 2
        return self.q.pop(mid)
        
    def popBack(self) -> int:
        if len(self.q) == 0:
            return -1
        return self.q.pop(-1)


# Your FrontMiddleBackQueue object will be instantiated and called as such:
# obj = FrontMiddleBackQueue()
# obj.pushFront(val)
# obj.pushMiddle(val)
# obj.pushBack(val)
# param_4 = obj.popFront()
# param_5 = obj.popMiddle()
# param_6 = obj.popBack()