#include <bits/stdc++.h>
using namespace std;
#define tissfi tuple<int, string, string, float, int>
#define sz(x) (int)x.size()
#define output(x) cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << " " << get<3>(x) << "\n"

bool compGT(tissfi a, tissfi b)
{
    if (get<3>(a) == get<3>(b))
    {
        return get<4>(a) < get<4>(b);
    }
    return get<3>(a) > get<3>(b);
}

bool compLT(tissfi a, tissfi b)
{
    if (get<3>(a) == get<3>(b))
    {
        return get<4>(a) < get<4>(b);
    }
    return get<3>(a) < get<3>(b);
}

int main()
{
    int N, current = 0;
    cin >> N;
    vector<tissfi> students;
    while (N--)
    {
        current++;
        string o;
        cin >> o;
        if (o == "INS")
        {
            int id;
            string fn, ln;
            float score;
            cin >> id >> fn >> ln >> score;
            students.push_back({id, fn, ln, score, current});
        }
        else if (o == "DEL")
        {
            int id;
            cin >> id;
            vector<int> indexesToErase;
            for (int i = 0; i < sz(students); i++)
            {
                if (get<0>(students[i]) == id)
                {
                    indexesToErase.push_back(i);
                }
            }
            // prevent unexpected behavior
            reverse(indexesToErase.begin(), indexesToErase.end());
            for (int i = 0; i < sz(indexesToErase); i++)
            {
                students.erase(students.begin() + indexesToErase[i]);
            }
        }
        else if (o == "WHE")
        {
            string o2;
            cin >> o2;
            if (o2 == "ID")
            {
                int id;
                cin >> id;
                for (int i = 0; i < sz(students); i++)
                {
                    if (get<0>(students[i]) == id)
                    {
                        output(students[i]);
                    }
                }
            }
            else if (o2 == "SCORE")
            {
                string op;
                cin >> op;
                if (op == "GT")
                {
                    float score;
                    vector<tissfi> targets;
                    cin >> score;
                    for (int i = 0; i < sz(students); i++)
                    {
                        if (get<3>(students[i]) > score)
                        {
                            targets.push_back(students[i]);
                        }
                    }
                    sort(targets.begin(), targets.end(), compGT);
                    for (int i = 0; i < sz(targets); i++)
                    {
                        output(targets[i]);
                    }
                }
                else if (op == "LT")
                {
                    float score;
                    vector<tissfi> targets;
                    cin >> score;
                    for (int i = 0; i < sz(students); i++)
                    {
                        if (get<3>(students[i]) < score)
                        {
                            targets.push_back(students[i]);
                        }
                    }
                    sort(targets.begin(), targets.end(), compLT);
                    for (int i = 0; i < sz(targets); i++)
                    {
                        output(targets[i]);
                    }
                }
            }
        }
    }
    return 0;
}
