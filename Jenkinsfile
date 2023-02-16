pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'make'
                sh 'g++ "main/PES1UG20CS458.cpp"'
            }
        }
        stage('Test') {
            steps {
                sh './a.out'
            }
        }
        stage('Deploy') {
            steps {
                sh 'make install'
            }
        }
    }

    post {
        always {
            junit '**/test-results.xml'
        }
        failure {
            echo 'pipeline failed'
        }
    }
}
