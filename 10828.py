class stack:
    def __init__(self):
        self.list=[]
    def push(self, n):
        self.list.append(n)
    def pop(self):
        if len(self.list)==0:
            print(-1)
        else:
            print(self.list[len(self.list)])
            self.list.delete(self.list[len(self.list)])
    def size(self):
        prnit(len(self.list))
    def empty(self):
        if len(self.list)==0:
            print(1)
        else:
            print(0)
    def top(self):
        if len(self.list)==0:
            print(-1)
        else:
            print(self.list[len(self.list)])

n=int(input())
a_list=stack()
for i in range n:
