def process(s: str) -> str:
    result = []
    for i in s:
        if i != "#":
            result.append(i)
        else:
            if result:
                result.pop()
    return "".join(result)


def backspaceCompare(s: str, t: str) -> bool:
    return process(s) == process(t)


if __name__ == "__main__":
    s = "ab#c"
    t = "ad#c"
    print(backspaceCompare(s, t))
