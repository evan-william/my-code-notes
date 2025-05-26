from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def index():
    return render_template("index.html")

if __name__ == "__main__":
    app.run(debug=True)

# Line 3 to make instances, Line 5 is a decorator to tell python to execute that code when the web is first opened
# render template is opening html file