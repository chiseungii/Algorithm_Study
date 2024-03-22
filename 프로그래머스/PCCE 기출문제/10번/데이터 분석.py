def solution(data, ext, val_ext, sort_by):
    idx = ["code", "date", "maximum", "remain"].index(ext)
    answer = [d for d in data if d[idx]<val_ext]

    sort_idx = ["code", "date", "maximum", "remain"].index(sort_by)
    return sorted(answer, key=lambda x:x[sort_idx])
