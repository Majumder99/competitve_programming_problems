class RecentCounter:

    def __init__(self):
        self.recentCounter = []
        

    def ping(self, t: int) -> int:
        self.recentCounter.append(t)

        while self.recentCounter[0] < t-3000:
            self.recentCounter.pop(0)
        return len(self.recentCounter)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)