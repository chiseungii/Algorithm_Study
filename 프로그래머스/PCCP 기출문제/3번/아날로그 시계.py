def solution(h1, m1, s1, h2, m2, s2):
    start = 3600*h1 + 60*m1 + s1
    end = 3600*h2 + 60*m2 + s2

    cnt = 0
    for i in range(start, end+1):
        h = (i//3600)%12
        m = (i%3600)//60
        s = i%60

        h_degree = h*30 + m*0.5 + s/120
        m_degree = m*6 + s*0.1
        s_degree = s*6

        if s_degree==h_degree or s_degree==m_degree: cnt += 1
        else:
            if i == start: continue

            h_before = ((i-1)//3600)%12
            m_before = ((i-1)%3600)//60
            s_before = (i-1)%60

            h_before_degree = h_before*30 + m_before*0.5 + s_before/120
            m_before_degree = m_before*6 + s_before*0.1
            s_before_degree = s_before*6

            if m_before != m: s_degree = 360
            elif h_before != h: m_degree = s_degree = 360

            if s_before_degree<h_before_degree and s_degree>h_degree: cnt += 1
            if s_before_degree<m_before_degree and s_degree>m_degree: cnt += 1

    return cnt
