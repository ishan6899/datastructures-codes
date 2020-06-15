def dfs(adj, node, visited, par):
    visited[node] = 1
    print(node)
    for i in adj[node]:
        if i == visited:
            continue
        if par[node] == i:
            continue
        dfs(adj, i, visited, par)

n = int(input("Enter number of nodes: "))

# Adjacency List
adj = [[] for i in range(n + 5)]
# Parent Array
par = [0 for i in range(n + 5)]
# Visited Array
visited = [0 for i in range(n + 5)]


print("Enter Parent followed by child: ")
for i in range(n-1):
    u, v = map(int, input().split())
    adj[u].append(v)
    adj[v].append(u)
    par[v] = u
start_node = 1

dfs(adj, start_node, visited, par)
