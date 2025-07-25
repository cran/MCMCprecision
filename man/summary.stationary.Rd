% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/summary.R
\name{summary.stationary}
\alias{summary.stationary}
\title{Summary for Posterior Model Probabilities}
\usage{
\method{summary}{stationary}(object, BF = FALSE, logBF = FALSE, ...)
}
\arguments{
\item{object}{posterior samples of the stationary distribution (rows = samples; columns = models).}

\item{BF}{whether to compute summaries for all pairwise Bayes factors.}

\item{logBF}{whether to summarize log Bayes factors instead of Bayes factors.}

\item{...}{passed to \code{\link{fit_dirichlet}} to estimate effective sample size
(e.g., \code{maxit} and \code{abstol}).}
}
\value{
a list with estimates for
    \code{"pp"} = posterior model probabilities,
    \code{"n.eff"} = effective sample size, and
    \code{"bf"} = pairwise Bayes factors (optional)
}
\description{
Summary for a sample of posterior model probabilities (\code{\link{stationary}}).
Also provides the estimated effective sample size and summaries for all pairwise Bayes factors.
}
\details{
Effective sample is estimated by fitting a Dirichlet model to the
posterior model probabilities (thereby assuming that samples were drawn from
an equivalent multinomial distribution based on independent sampling).
More precisely, sample size is estimated by the sum of the Dirichlet parameters
\eqn{\sum\alpha[i]} minus the prior sample size \eqn{\epsilon*M^2}
(where \eqn{M} is the number of sampled models and \eqn{\epsilon} the
prior parameter for each transition frequency).
}
\examples{
P <- matrix(c(.1,.5,.4,
              0, .5,.5,
              .9,.1,0), ncol = 3, byrow=TRUE)
z <- rmarkov(1000, P)
samples <- stationary(z, summary = FALSE)
summary(samples)

}
\seealso{
\code{\link{stationary}}, \code{\link{fit_dirichlet}}
}
