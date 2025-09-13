from flask import Flask, request, send_from_directory

app = Flask(__name__)

# 简单的固定账号与密码
V= {"account": "admin", "password": "123456"}


@app.get("/")
def index():
    return send_from_directory(".", "index.html")


@app.post("/login")
def login():
    if (
        request.form.get("account") == V["account"]
        and request.form.get("password") == V["password"]
    ):
        return "登录成功"
    return "密码或账号错误", 401


if __name__ == "__main__":
    app.run()

