import collections

def bfs(graph, root):
    seen, queue = set(), collections.deque([root])
    while (queue):
        vertex = queue.popleft()
        visit(vertex)
        for node in graph[vertex]:
            if node not in seen:
                seen.add(node)
                queue.append(node)

def visit(n):
    print(n,end=' ')


graph = {"0000001": ["0048308","0048311"], "0048308": ["0006996"],
         "0048311": ["0007005","0051646"],"0007005":["0006996"],
         "0006996":["0016043"],"0051646":["0051640"],
         "0051640":["0051641"],"0051641":["0051179"],
         "0051179":[],"0016043":["0009987","00718840"],"0009987":["0008150"],
        "00718840":["0008150"],"0008150":[]
         }

bfs(graph, "0000001")