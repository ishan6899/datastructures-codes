def bfs(adj, visited, q, par):
    if len(q) == 0:
        return
    node = q.pop(0)
    visited[node] = 1
    print(node)

    #Pushing elements from that node in the queue
    for i in adj[node]:
        if i == visited:
            continue
        if par[node] == i:
            continue
        q.append(i)
    bfs(adj, visited, q, par)

n = int(input("Enter number of nodes: "))

# Adjacency List
adj = [[] for i in range(n + 5)]
# Parent Array
par = [0 for i in range(n + 5)]
# Visited Array
visited = [0 for i in range(n + 5)]


print("Enter Parent followed by root: ")
for i in range(n-1):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)
    par[v] = u

# Initialising Queue for BFS with root node
q = [1] # root node
bfs(adj, visited, q, par)

