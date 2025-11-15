//功能：排序
// 成绩从高到低排序
bool cmpScoreDesc(Student a, Student b) {
    return a.score > b.score;
}
// 成绩从低到高排序
bool cmpScoreAsc(Student a, Student b) {
    return a.score < b.score;
}
// 姓名升序（A-Z）
bool cmpNameAsc(Student a, Student b) {
    return a.name < b.name;
}
// 姓名降序（Z-A）
bool cmpNameDesc(Student a, Student b) {
    return a.name > b.name;
}

void sortStudents(Student students[], int count) {
    if (count <= 1) {
        cout << "学生数量不足，无需排序！" << endl;
        return;
    }

    int Type;
    cout << "请选择排序类型：1-按成绩排序   2-按姓名排序" << endl;
    cin >> Type;

    switch (Type) {
        case 1: // 按成绩排序
            int T;
            cout << "请选择成绩排序方式：1-从高到低   2-从低到高" << endl;
            cin >> T;
            if (T == 1) {
                sort(students + 1, students + count + 1, cmpScoreDesc);
                cout << "已按成绩从高到低排序完成！" << endl;
            } else if (T == 2) {
                sort(students + 1, students + count + 1, cmpScoreAsc);
                cout << "已按成绩从低到高排序完成！" << endl;
            } else {
                cout << "成绩排序方式输入错误，排序取消！" << endl;
            }
            break;

        case 2: // 按姓名排序
            int T2;
            cout << "请选择姓名排序方式：1-升序（A-Z）   2-降序（Z-A）" << endl;
            cin >> T2;
            if (T2 == 1) {
                sort(students + 1, students + count + 1, cmpNameAsc);
                cout << "已按姓名升序（A-Z）排序完成！" << endl;
            } else if (T2 == 2) {
                sort(students + 1, students + count + 1, cmpNameDesc);
                cout << "已按姓名降序（Z-A）排序完成！" << endl;
            } else {
                cout << "姓名排序方式输入错误，排序取消！" << endl;
            }
            break;

        default:
            cout << "排序类型输入错误（仅支持1/2），排序取消！" << endl;
            break;
    }
}
