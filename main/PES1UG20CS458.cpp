pipeline {
    agent any

    stages {
        stage('Build Stage') {
            steps {
                sh 'make'
                sh 'g++ "main/PES1UG20CS458.cpp"'
            }
        }
        stage('Testing Stage') {
            steps {
                sh './a.out'
            }
        }
        stage('Deploy Stage') {
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
