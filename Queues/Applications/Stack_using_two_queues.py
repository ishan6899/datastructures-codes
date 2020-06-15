from queue import Queue

class Stack:
    def __init__(self, maxsize=50):
        self.q1=Queue()
        self.q2=Queue()
        self.curr_size=0
        self.max_size=maxsize
        print("*** Queue Initialised. MAXSIZE = ", self.max_size, " ***")
    
    def push(self,elem):
        if self.curr_size==self.max_size:
            print("Stack is full!")
            return -1
        self.q1.put(elem)
        self.curr_size+=1
        print("Pushed elem ", elem)
    
    def pop(self):
        if self.q1.empty():
            print("Stack is empty, pop not possible.")
            return -1
        while self.q1.qsize()!=1:
            self.q2.put(self.q1.queue[0])
            self.q1.get()
        self.q1.get()
        self.temp=self.q1
        self.q1=self.q2
        self.q2=self.temp
        self.curr_size-=1

    def top_elem(self):
        if self.curr_size==0:
            print("Stack has no element")
            return -1
        print("Top elem is:", end=" ")
        return self.q1.queue[self.q1.qsize()-1]
    
    def size(self):
        print("SIze is:", end=" ")
        return self.curr_size
    
def menu():
    print("MENU")
    print("1.Push")
    print("2.Pop")
    print("3.Top")
    print("4.Size")
    print("CHOOSE:", end=" ")
    opt=int(input())
    if opt>=1 and opt <=4:
        if opt==1:
            elem=int(input("Enter element: "))
            s.push(elem)
        elif opt==2:
            s.pop()
        elif opt==3:
            print(s.top_elem())
        else:
            print(s.size())
        print("-----------------------------")
        menu()
    else:
        return

s=Stack(40)
menu()
