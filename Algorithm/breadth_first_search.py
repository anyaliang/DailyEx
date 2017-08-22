from collections import deque

def is_seller(name):
    return name[-1] == 'm' #last letter of name is, then true

def breadth_first_search(graph, start):
    search_queue = deque() #create a *double-end* deque (...?)
    search_queue += graph["you"] #add all ur neighbors into queue

    while search_queue: #not empty
        person = search_queue.popleft() #queue return the value just poped

        if is_seller(person):
            return True
        else:
            search_queue += graph[person]
    return False


breadth_first_search(graph, "you")

# 如果第一个人不是目标，就把它的邻居加入到队列里，
# 然后检查下一个人是不是目标，不是的话，再把它的邻居也加进去
#
# 这么写只要查看一次就行了
